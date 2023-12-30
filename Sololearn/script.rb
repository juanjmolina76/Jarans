require 'pry-byebug'
=begin
def isogram?(string)
    original_length = string.length
    string_array = string.downcase.split

    binding.pry


    unique_length = string_array.uniq.length
    original_length == unique_length

end

isogram?("Odin")

=end
def yell_gretting(string)
    name = string

    binding.pry
    name = name.upcase
    gretting = "WASSAP, #{name}!"
    puts gretting
end
yell_gretting("bob")
