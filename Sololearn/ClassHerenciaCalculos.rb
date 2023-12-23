class Calculos

    def inilialize(x,y)
       @x = x
       @y = y
    end
   
     def suma
       @x + @y
     end
     def resta
       @x - @y
     end
     def multiplicacion
       @x * @y
     end
     def division
       @x / @y
     end
   end
   
   
   class Dato < Calculos
           attr_accessor :nombre, :tema
           def initialize (nombre,tema,x,y)
             super(nombre,tema)
             @x= s
             @y= y
           end
   
        def to_s
       "Nombre: #{@nombre} \nTema: #{@tema}\n"
        end  

        def resultado(x,y)
            puts "\n"
            puts "La Suma es #{suma}"
            puts "La resta es #{resta}"
            puts "La multuplicacion es #{multiplicacion}"
            puts "La division es #{division}"
          end
   end
   
   
   p1=Dato.new("Daniel","Ejercicios:",5,6)
   p1.resultado