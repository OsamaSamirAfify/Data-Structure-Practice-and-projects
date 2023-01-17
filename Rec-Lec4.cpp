#include <iostream>
#include <map>

using namespace std;

// declaring variables assuming that we have 50 box max
int box_quan, in_total, box_value[50];
// int calc_total = 0;


int choose(int start_seq, int start_in){
  //for Tracking the recurtion 
  printf("In Function, start_seq: %d, Calculated Total: %d \n ", start_seq, start_in);
  if (start_seq == box_quan)
    return in_total == start_in;

  return (choose(start_seq+1, start_in+box_value[start_seq]) || choose(start_seq+1, start_in));
}

int main() {
  cout << "Please Enter the Total Quantity and Number of Boxes: ";
  cin>> in_total>> box_quan;
  cout<<"\n";
  cout<<"Please Enter the Quantity in each Box: ";
  for (int i = 0; i<box_quan; i++)
    cin>>box_value[i];

  cout<<"\n";
  for (int i=0; i<box_quan; i++)
    cout<<box_value[i]<<" ";

  cout<<"\n";
  
  if (choose(0,0))
    printf("Found\n");
  else
    printf("Not Exist\n");
  
  
  
}