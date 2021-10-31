def start_program #method defination
    array_size = take_array_size_from_user
    array = take_array_elements(array_size)
    element = element_to_search
    
    index_found_at = binary_search(array, element, 0, array_size - 1)
    
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

def binary_search(array, element, starts, ends)
    if(starts > ends)
        return -1
    end

    mid = starts + ((ends - starts)/2)
    if(array[mid] == element)
        return mid

    elsif array[mid] > element
        ends = mid - 1
    elsif array[mid] < element
        starts = mid + 1
    end

    binary_search(array, element, starts, ends)
end

start_program