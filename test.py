#!/usr/bin/python3

import difflib
import os
import subprocess
import sys

def main(folder):
  root = os.path.dirname(os.path.abspath(__file__)) + f'/{folder}/test'
  #print(root, __file__)
  for folder, _, files in os.walk(root):
    if files:
      print(f"In {folder}:")
    for output_file in files:
      if not '.out.' in output_file:
        continue
      for input_file in files:
        if not '.in.' in input_file or output_file.split('.')[0] != input_file.split('.')[0]:
          continue
        print(f"\tComparing {output_file} with clang-format({input_file})")
        expected_fh = open(f'{folder}/{output_file}', 'r')
        expected = [line for line in expected_fh]
        actual = subprocess.run(['clang-format', '-style=file', f'{folder}/{input_file}'], cwd=root, stdout=subprocess.PIPE, stderr=subprocess.PIPE).stdout.decode('utf-8').splitlines(1)
        diff = difflib.unified_diff(expected, actual)
        if diff:
          print(''.join(diff))
        expected_fh.close()

if __name__ == '__main__':
  folder = 'c'
  if len(sys.argv) == 2:
    folder = sys.argv[1]
  print(f"Running tests for {folder}.")
  main(folder)