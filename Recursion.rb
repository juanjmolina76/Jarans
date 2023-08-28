def fact(n)
    if n<= 1
        1
    else
        n * fact(n-1)
    end
end
puts fact (7)

=begin
La recursion necesita de un caso base. En este caso el caso base es el 
if n<=1
    1
El cual determina que valor se pone en caso que el valor ingresado llegue a 1 o menor.

Luego tambien la RECURSIOn significa que una funcion SE LLAMA A SI MISMA dentro de la funcion.
Eso pasa en 
n * fact (n-1)

=end