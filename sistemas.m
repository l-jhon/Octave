puts("\nSistemas Lineares\n\n");
puts("Sistema Linear 01\n\n");
puts("{   x1 + 2*x2 = 4\n");
puts("{ 3*x1 + 5*x2 = 11\n\n");

A = [1, 2; 3, 5];
b = [4; 11];

[L, U] = fatoracaoLU(A)

X = (U \ L)  * b

puts("\n\n");

puts("Sistema Linear 02\n\n");
puts("{x1 + 2*x2 +   x3  = 4\n");
puts("{      -x1 - 3*x2  = 1\n");
puts("{     4*x2 + 2*x3  = -2\n\n");

A = [1, 2, 1; -1, -3, 0; 0, 4, 2];

[L, U] = fatoracaoLU(A)

puts("\n\n");

puts("Sistema Linear 03\n\n");
puts("{  x1 +   x2 + 90*x3 = 30\n");
puts("{        x1 -  2*x2 = 14\n");
puts("{4*x1 - 5*x2 + 90*x3 = 20\n\n");

A = [1, 1, 90; 1, -2, 0; 4, -5, 90];

[L, U] = fatoracaoLU(A)