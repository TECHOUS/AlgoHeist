def start_program #method defination
    array_size = take_array_size_from_user
    array = take_array_elements(array_size)
    element = element_to_search
    
    index_found_at = linear_search(array, element)
    
    if index_found_at == -1
        puts "Ughh... the element you want to search is not present in the given array"
    else
        puts "You Got it... the element is present in the given array at index #{index_found_at}"
    end
end

def take_array_size_from_user
    puts "Enter the size of the array"
    array_size = gets.chomp.to_i
    puts "Array size given by you is #{array_size}"
    
    return array_size
end

def take_array_elements(array_size)
    array = [] #initializing an empty array
    array_size.times do |var| #looping array's size times to get that number of elements to fill in array
        puts "Enter array element no. #{var}"
        array << gets.chomp.to_i #takes the input in form of string and convert it to integer
    end
    
    return array
end

def element_to_search
    puts "Enter element to search in array"
    element = gets.chomp.to_i
    
    return element
end

def linear_search(array, element, index = 0) #default value of index to be searched at is set to 0
    if array.size == index
        return -1 #element not found in the array

    elsif array[index] == element
        return index
    else
        linear_search(array, element, index+1)
    end
end


start_program #calls the method for execution
