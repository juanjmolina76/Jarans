class Person
    attr_accessor :name, :age

    def initialize (name, age)
        @name = name
        @age = age
    end
    def change (n,a)
        self.name = n
        self.name = a 
    end
    def show_info
        puts "#{self.name} tiene #{self.age} años de edad"
    end
end

    p = Person.new("David",47)
    p.change("Boby",27)
    p.show_info