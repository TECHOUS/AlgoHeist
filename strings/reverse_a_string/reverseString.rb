def start_program #method defination
    input = take_input_from_user
    result = reverse_string(input)
    
    puts "Reversed string is ---- #{result}" #print final result along with the new line
end

def take_input_from_user
   puts "Enter string to be reversed"
   gets.chomp #returning the input taken from user (whatever is present on last line, gets returned in ruby)
end

def reverse_string(original_string)
   reverse_string = ""
   original_string.split("").reverse.each do |char| #splitting each character of string and looping from the end
      reverse_string += char #appending each character to a new string
   end
   
   return reverse_string
end

start_program #call to execute method or start the program