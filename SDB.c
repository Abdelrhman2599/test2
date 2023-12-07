
#include "SDB.h"
#include "STD.h"
uint8 count;
bool SDB_IsFull ()
{
  if(count==10)
  {
      printf("list is full\n")
    return true;
  }
  else
  {
      printf("list is not full\n")
      return false;
  }
}

 uint8 SDB_GetUsedSize()
 {
     printf("The number of student enrolled is %d\n",count);
     return count;

 }

  bool SDB_AddEntry()
  {
      if(!SDB_IsFull ())
    {
        printf("Add a new student\n");

        printf("Enter the student ID\n");
        scanf("%d",&stds[count].Student_ID);

        printf("Enter the student year\n");
        scanf("%d",&stds[count].Student_year);

        printf("Enter the first course ID\n");
        scanf("%d",&stds[count].Course1_ID);

        printf("Enter the first course grade\n");
        scanf("%d",&stds[count].Course1_grade);

        printf("Enter the second course ID\n");
        scanf("%d",&stds[count].Course2_ID);

        printf("Enter the second course grade\n");
        scanf("%d",&stds[count].Course2_grade);

        printf("Enter the third ID grade\n");
        scanf("%d",&stds[count].Course3_ID);

        printf("Enter the third course grade\n");
        scanf("%d",&stds[count].Course3_grade);

        count+=1;
        return 1;
    }
    else
    {
        printf("Could not add a student");
        return 0;
    }

  }

  void SDB_DeletEntry ()
  {
      int32 rnumber;
   printf("please enter the student ID\n");
  scanf("%d",&rnumber);
  for(int j=0;j<=count;j++)
  {
    if(rnumber==stds[j].Student_ID)
    {
        for(int k=j; k<=count; k++)
        {
            stds[k] = stds[k + 1];
        }
        count--;
    }

  }
  printf("student deleted\n");

  }

  bool SDB_ReadEntry ()
  {
      int32 rnumber;
  printf("please enter the student roll number\n");
  scanf(" %d",&rnumber);
  for(int j=0;j<=count;j++)
  {
    if(rnumber==stds[j].Student_ID)
    {
        printf("The student ID is %d\n",stds[j].Student_ID);
        printf("The student year is %d\n",stds[j].Student_year);

        printf("The student first course Id is %d\n",stds[j].Course1_ID);
        printf("The student first course grade is %d\n",stds[j].Course1_grade);

        printf("The student second course Id is %d\n",stds[j].Course2_ID);
        printf("The student first course grade is %d\n",stds[j].Course2_grade);

        printf("The student third course Id is %d\n",stds[j].Course3_ID);
        printf("The student first course grade is %d\n",stds[j].Course3_grade);


        return 1;
    }
    else
    {
     printf("not found\n");


    }


  }
return 0;


  }

  void SDB_GetList ()
  {
      printf("number of IDs is %d\n",count);
      for(int i= 0; i< count; i++)
      {
          printf("id %d\n",stds[i].Student_ID);
      }

  }


  bool SDB_IsIdExist ()
  {
  int32 rnumber;
  printf("please enter the student roll number\n");
  scanf(" %d",&rnumber);
  for(int j=0;j<=count;j++)
  {
    if(rnumber==stds[j].Student_ID)
    {
      printf("Id found\n");
        return 1;
    }
    else;




  }
  printf("Id not found\n");

  return 0;

  }
