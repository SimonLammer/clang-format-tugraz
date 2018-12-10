#!/usr/bin/python3

import difflib
import os
import subprocess

def main():
  root = os.path.dirname(os.path.abspath(__file__)) + '/test'
  print(root, __file__)
  for folder, _, files in os.walk(root):
    if files:
      print(f"In {folder}:")
    for output_file in files:
      if not output_file.endswith('.out.c'):
        continue
      for input_file in files:
        if not input_file.endswith('.in.c') or not output_file[:-6] == input_file[:-5]:
          continue
        print(f"\tComparing {output_file} with clang-format({input_file})")
        expected_fh = open(f'{folder}/{output_file}', 'r')
        expected = [line for line in expected_fh]
        actual = subprocess.run(['clang-format', '-style=file', f'{folder}/{input_file}'], cwd=root, stdout=subprocess.PIPE, stderr=subprocess.PIPE).stdout.decode('utf-8').splitlines(1)
        diff = difflib.unified_diff(expected, actual)
        if diff:
          print(''.join(diff))
        expected_fh.close()
  pass

if __name__ == '__main__':
  main()