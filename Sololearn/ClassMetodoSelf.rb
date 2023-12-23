class Calculos

    #def inilialize(x,y)
     # @x = x
      #@y = y
   # end
    
    def self.suma(x,y)
      x + y
    end
    def self.resta(x,y)
      x - y
    end
    def self.multiplicacion(x,y)
      x * y
    end
    def self.division( x,y)
      x / y
    end
  
    def self.resultado(x,y)
      puts "\n"
      puts "La Suma es #{suma(x,y)}"
      puts "La resta es #{resta(x,y)}"
      puts "La multuplicacion es #{multiplicacion(x,y)}"
      puts "La division es #{division(x,y)}"
    end
  end
  
  
  
  class Dato 
       
          attr_accessor :nombre, :tema
          def initialize (nombre,tema)
            @nombre = nombre
            @tema = tema
          end
         
       def to_s
      "Nombre: #{@nombre} \nTema: #{@tema}\n"
       end  
  end
      
  
  p1=Dato.new("Pedro","Matematicas")
  puts p1
  
  
  puts Calculos.suma(3,5)
  puts Calculos.resta(9,3)
  a= Calculos.multiplicacion(6,9)
  b= Calculos.division(65,3)
  d= Calculos.suma(a,b)
  puts a,b,d
    
  puts Calculos.resultado(5,2)
  
  