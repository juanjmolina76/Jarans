# use the stack trace to debug the following method
# Don't look at this method prior to running the test
# Run rspec, let the test fail, and go through the stack trace again

#require 'pry-byebug'

def increment_greatest_value(nested_array)
    greatest_value = nested_array.flatten.max

    #binding.pry

    nested_array.each do |array|
      array.each do |current_value|
        if greatest_value < current_value
          greatest_value = current_value
        end
      end
    end
    puts greatest_value += 1
  end

increment_greatest_value([[4,3,7],[34,8,1]])