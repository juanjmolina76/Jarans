# First, we're going to practice reading the Stack Trace
# Don't look at this method prior to running the test
# Type 'rspec' into the terminal to run Rspec
# Once this test fails, have a look at the Stack Trace
# Try to see if you can work your way from the last line, the bottom of the stack
# To the top, the first line, where the error occured, and ONLY THEN fix the error

#require 'pry-byebug'

def decrement_smallest_value(nested_array)
    smallest_value = nested_array.flatten.min

    #binding.pry

    nested_array.each do |array|
      array.each do |current_value|
        if smallest_value > current_value
          smallest_value = current_value
        end
      end
    end
    puts smallest_value
  end

decrement_smallest_value([[4,3,7],[34,8,1]])



