class Person
    attr_accessor :name
    def initialize(name)
        @name =name
    end
end
# salto de prueba
p=Person.new("David")
p.name="Boby"
puts p.name

#Boby
=begin
El metodo attr_accessor permite acceder al metodo setter para modificar
el valor de la variable de instancia @name, a travez de el objeto p
el cual en primera instancia fue definido como "David", ahora 
a travez de la variable de instancia @name, 
la cual es parte del metodo attr_accessor, 
es definida por el usuario a travez de p.name="Boby".

Modificando el valor de la variable de instancia desde afuera de la
clase, a travez de ese "constructor" de Ruby, el metodo attr_accessor.

a el metodo attr_accessor se le provee un SIMBOLO :name el cual representa la variable de instancia @name

=end