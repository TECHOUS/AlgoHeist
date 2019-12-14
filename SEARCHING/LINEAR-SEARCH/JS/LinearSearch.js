let stdin = process.openStdin();

console.log("Enter the array in format: 13=1,2,3");
stdin.addListener("data", function(string) {
    string = string.toString().trim();

    if(string.search(",") === -1 && string.search("=") === -1){     // if format is not correct close input console
        console.log("Entered Wrong Format !!!");
        process.exit(0);
    }

    let array = string.split(",");

    let firstValue = array.shift().split("=");
    array.unshift(firstValue[1]);
    let findElement = firstValue[0];

    if(linearSearch(findElement, array)){
        console.log("Element finded");
    }else{
        console.log("Element not finded");
    }
    process.exit(0);
});

let linearSearch = (findElement, array)=>{                          // this function contains the linear search logic
    for(let i=0;i<array.length;i++){
        if(array[i] == findElement){
            return true;
        }
    }
}