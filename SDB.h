
#include "STD.h"
#ifndef SDB_H_INCLUDED
#define SDB_H_INCLUDED
typedef struct SimpleDb
{
 uint32 Student_ID;
 uint32 Student_year;
 uint32 Course1_ID;
 uint32 Course1_grade;
 uint32 Course2_ID;
 uint32 Course2_grade;
 uint32 Course3_ID;
 uint32 Course3_grade;

} student;
student stds[10];

  bool SDB_IsFull ();
  uint8 SDB_GetUsedSize();
  bool SDB_AddEntry();
  void SDB_DeletEntry ();
  bool SDB_ReadEntry ();
  void SDB_GetList ();
  bool SDB_IsIdExist ();
  void SDB_APP ();
  void SDB_action (int32 choice);



#endif // SDB_H_INCLUDED
