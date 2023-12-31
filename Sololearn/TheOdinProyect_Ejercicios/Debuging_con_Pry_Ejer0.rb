#require 'pry-byebug'

def isogram?(string)
    original_length = string.length
    string_array = string.downcase.split

    binding.pry

    uniq_length = string_array.uniq.length
    original_length == uniq_length
end

isogram? ("Odin")
