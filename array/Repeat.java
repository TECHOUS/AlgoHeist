package array1;


import java.util.*;
import java.io.*;

class Main {
    int count;
    int index;

  public Main(int index){
        this.index=index;
        this.count=1;
  }

  public void Count(){
    this.count++;
  }
}

class Repeat {
  static final int NO_OF_CHARS = 256;
 static HashMap<Character, Main> hash=new HashMap<>(NO_OF_CHARS);

 public static void getCharacterCount(String str){
   for(int i=0; i<str.length(); i++) {
     if(hash.containsKey(str.charAt(i))) {
       hash.get(str.charAt(i)).Count();
     }
     else {
       hash.put(str.charAt(i), new Main(i));
     }
   }
 }

 static int nonRepeatChar(String str){
      getCharacterCount(str);
      int result=Integer.MAX_VALUE;

      for(Map.Entry<Character , Main> entry : hash.entrySet())
      {
        int c=entry.getValue().index;
        int ind= entry.getValue().index;
        if(c==1 && ind < result){
          result =ind;
        }
      }
      return result;

    
 }

 public static void main (String[] args) {
    String str=  "ajdbbbsaccfe";
    int index = nonRepeatChar(str);
    System.out.println(
      index== Integer.MAX_VALUE ? "every character are repeating or empty"
       : "non- repeating character are " + str.charAt(index +1 ));
    
 
 
 
  

}
}



