#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
//defining the structure containing the points 
struct point {
   int x, y;
};



int sortby_X(point p1, point p2) {   

 //to sort according to x value
   return (p1.x < p2.x);
}

int sorby_Y(point p1, point p2) {    
//to sort according to y value
   return (p1.y < p2.y);
}

float dist(point p1, point p2) {    
//find distance between points
   return sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2));
}

float min_distance(point pts[], int n) {    
//find minimum distance between two points in a set
   float min = 9999;//we take a max value for the min distance 
   for (int i = 0; i < n; ++i)
      for (int j = i+1; j < n; ++j)
         if (dist(pts[i], pts[j]) < min)
            min = dist(pts[i], pts[j]);
   return min;
}

float min(float a, float b) {
   return (a < b)? a : b;
}

float strip_distance_closest(point strip[], int size, float d) {    
//find closest distance of two points in a strip
   float min = d;
   for (int i = 0; i < size; ++i)
      for (int j = i+1; j < size && (strip[j].y - strip[i].y) < min; ++j)
         if (dist(strip[i],strip[j]) < min)
            min = dist(strip[i], strip[j]);
   return min;
}

float findClosest(point sorted_in_x[], point ySorted[], int n){
   if (n <= 3)
      return min_distance(sorted_in_x, n);
   int mid = n/2;

   point midPoint = sorted_in_x[mid];
   point sorted_Y_left[mid+1];     // y sorted points in the left side
   point sorted_y_right[n-mid-1];  // y sorted points in the right side
   int leftIndex = 0, rightIndex = 0;

   for (int i = 0; i < n; i++) {       //separate y sorted points to left and right
      if (ySorted[i].x <= midPoint.x)
         sorted_Y_left[leftIndex++] = ySorted[i];
      else
         sorted_y_right[rightIndex++] = ySorted[i];
   }

   float leftDist = findClosest(sorted_in_x, sorted_Y_left, mid);
   float rightDist = findClosest(ySorted + mid, sorted_y_right, n-mid);
   float dist = min(leftDist, rightDist);

   point strip[n];      //hold points closer to the vertical line
   int j = 0;

   for (int i = 0; i < n; i++)
      if (abs(ySorted[i].x - midPoint.x) <dist) {
         strip[j] = ySorted[i];
         j++;
      }
   return min(dist, strip_distance_closest(strip, j, dist));    //find minimum using dist and closest pair in strip
}

float closestPair(point pts[], int n) {    
//find distance of closest pair in a set of points
   point sorted_in_x[n];
   point ySorted[n];

   for (int i = 0; i < n; i++) {
      sorted_in_x[i] = pts[i];
      ySorted[i] = pts[i];
   }

   sort(sorted_in_x, sorted_in_x+n, sortby_X);
   sort(ySorted, ySorted+n, sorby_Y);
   return findClosest(sorted_in_x, ySorted, n);
}



//main function with the test cases


int main() {
//format of input of points
   point P[] ={{0,1},{5,3},{8,-6},{5,-5}};

//
   int n = sizeof(P)/sizeof(P[0]);
   cout<< "The minimum distance is : " << closestPair(P, n);
}
