a = [1 2; 3 5];
b = [4; 11];

[m, n] = size(a);

for k = 1 : 1 : n - 1
    for i = k + 1 : 1 :n
        fator = a(i, k) / a(k, k);
        a(i, k) = fator;
        for j = k + 1 : 1 : n
            a(i, j) = a(i,j) - (fator * a (k, j));
        end
    end
end

for i = 2 : 1 : n
    soma = b(i);
    for j = 1 : 1 : i - 1
        soma = soma - a(i, j) * b(j);
    end
    b(i) = soma;
end

x(n) = b(n)/ a(n, n);
for i = n - 1 : -1 : 1
    soma = 0;
     for j = i + 1 : 1 : n
         soma = soma + a(i,j) * x(j);
     end
     x(i) = (b(i) - soma) / a(i,i);
end

puts (soma)