int wrong=0;
int correct = wrong+5;
int *a_pointer = & wrong;
wrong = correct++;
doSomething(wrong,correct,a_pointer);
int trailing_space = 4; 