/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน 
    , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด
    (ผลลัพธ์ของ Salary จะต้องอยู่ในรูปแบบ Decimal Number เท่านั้น เช่น 374,000)

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120,000.00

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374,000.00
*/

#include <stdio.h>

int main() {

    char EmployeesID[10] ;
    float workingHour,SalaryperHour ;

    //รับข้อมูลจากผู้ใช้
    printf( "Input the Employees ID(Max. 10 chars):\n" ) ;
    scanf( "%s" , EmployeesID ) ;

    printf("Input the working hrs : \n" ) ;
    scanf( "%f" , &workingHour ) ;

    printf( "Sarary amount/hr : \n" ) ;
    scanf("%f" , &SalaryperHour ) ;

    //คำนวณเงินเดือน
    float Salary = workingHour * SalaryperHour ;

    //เเสดงผลลัพธิ์
    printf( "Employees ID = %s \n" , EmployeesID ) ;
    printf( "Salary = U$ %0.2f \n" , Salary ) ;

    return 0 ;

}