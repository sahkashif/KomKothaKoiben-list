#include <iostream>
#include "PhoneNumber.h"
#include "Customer.h"
#include "KomKothaKoibenSTLList.h"


void execution()
{
	//Setting Phone Numbers

	PhoneNumber numOne, numTwo, numThree, numFour, numFive, numSix, numSeven, numEight, numNine, numTen, numEleven, numTwelve, numTherteen, numFourteen, numFifteen;

	numOne.set_phone_number("01783511730");
	numOne.set_operator_name("GrameenPhone");

	numTwo.set_phone_number("01715583543");
	numTwo.set_operator_name("GrameenPhone");

	numThree.set_phone_number("01998021382");
	numThree.set_operator_name("BanglaLink");

	numFour.set_phone_number("01675743091");
	numFour.set_operator_name("KomKothaKoiben");

	numFive.set_phone_number("01815565307");
	numFive.set_operator_name("Robi");

	numSix.set_phone_number("01883511730");
	numSix.set_operator_name("Robi");

	numSeven.set_phone_number("01615583543");
	numSeven.set_operator_name("KomKothaKoiben");

	numEight.set_phone_number("01598021382");
	numEight.set_operator_name("Teletalk");

	numNine.set_phone_number("01675743091");
	numNine.set_operator_name("KomKothaKoiben");

	numTen.set_phone_number("01915565307");
	numTen.set_operator_name("BanglaLink");

	numEleven.set_phone_number("01811751319");
	numEleven.set_operator_name("Robi");

	numTwelve.set_phone_number("01911751318");
	numTwelve.set_operator_name("BanglaLink");

	numTherteen.set_phone_number("01555588888");
	numTherteen.set_operator_name("Teletalk");

	numFourteen.set_phone_number("01686955760");
	numFourteen.set_operator_name("KomKothaKoiben");

	numFifteen.set_phone_number("01741200001");
	numFifteen.set_operator_name("GrameenPhone");

	//end of phone number declaration








	//Setting Customer Details 

	Customer customer;
	customer.set_name("Oyon");
	customer.set_father_name("Anudip");
	customer.set_mother_name("Promila");
	string nid = "19992222341";
	char customerNID[11];
	for (int index = 0; index < 11; index++)
	{
		customerNID[index] = nid[index];
	}
	customer.set_age(19);
	customer.set_gender('M');
	customer.set_national_ID(customerNID);
	customer.set_present_address("Dhaka");
	customer.set_permanent_address("Mymensingh");
	customer.set_marital_status(false);
	customer.set_customer_index(1);
	customer.set_eye_color("Brown");
	customer.set_hair_color("Black");
	customer.set_height(5.5);
	customer.set_weight(42);
	customer.insert_phone_number(numOne);
	customer.insert_phone_number(numTwo);


	Customer customer1;
	customer1.set_name("Noyon");
	customer1.set_father_name("Shelu");
	customer1.set_mother_name("Hasan");
	string nid1 = "19992222334";
	char customerNID1[11];
	for (int index1 = 0; index1 < 11; index1++)
	{
		customerNID1[index1] = nid1[index1];
	}
	customer1.set_age(20);
	customer1.set_gender('M');
	customer1.set_national_ID(customerNID1);
	customer1.set_present_address("Mohammadpur,Dhaka");
	customer1.set_permanent_address("Nowakhali");
	customer1.set_marital_status(false);
	customer1.set_customer_index(2);
	customer1.set_eye_color("Browns");
	customer1.set_hair_color("Blacks");
	customer1.set_height(6.5);
	customer1.set_weight(45);
	customer1.insert_phone_number(numThree);
	customer1.insert_phone_number(numFour);


	Customer customer2;
	customer2.set_name("Sani");
	customer2.set_father_name("Nasir");
	customer2.set_mother_name("Shahida");
	string nid2 = "19972222315";
	char customerNID2[11];
	for (int index2 = 0; index2 < 11; index2++)
	{
		customerNID2[index2] = nid2[index2];
	}
	customer2.set_age(23);
	customer2.set_gender('M');
	customer2.set_national_ID(customerNID2);
	customer2.set_present_address("Mohammadpur,Dhaka");
	customer2.set_permanent_address("Dhaka");
	customer2.set_marital_status(true);
	customer2.set_customer_index(3);
	customer2.set_eye_color("Blue");
	customer2.set_hair_color("Brown");
	customer2.set_height(6.0);
	customer2.set_weight(50.0);
	customer2.insert_phone_number(numThree);
	customer2.insert_phone_number(numFour);

	Customer customer3;
	customer3.set_name("Shafi");
	customer3.set_father_name("Nasir");
	customer3.set_mother_name("Shahida");
	string nid3 = "20032332319";
	char customerNID3[11];
	for (int index3 = 0; index3 < 11; index3++)
	{
		customerNID3[index3] = nid3[index3];
	}
	customer3.set_age(15);
	customer3.set_gender('M');
	customer3.set_national_ID(customerNID3);
	customer3.set_present_address("Dhakauddan,Mohammadpur,Dhaka");
	customer3.set_permanent_address("Shariatpur");
	customer3.set_marital_status(false);
	customer3.set_customer_index(4);
	customer3.set_eye_color("Black");
	customer3.set_hair_color("Blond");
	customer3.set_height(5.5);
	customer3.set_weight(70.2);
	customer3.insert_phone_number(numSix);
	customer3.insert_phone_number(numSeven);

	Customer customer4;
	customer4.set_name("Maliha");
	customer4.set_father_name("Mizan");
	customer4.set_mother_name("Dolly");
	string nid4 = "19971032319";
	char customerNID4[11];
	for (int index4 = 0; index4 < 11; index4++)
	{
		customerNID4[index4] = nid4[index4];
	}
	customer4.set_age(22);
	customer4.set_gender('F');
	customer4.set_national_ID(customerNID4);
	customer4.set_present_address("Krishimarket,Mohammadpur,Dhaka");
	customer4.set_permanent_address("Barishal");
	customer4.set_marital_status(false);
	customer4.set_customer_index(5);
	customer4.set_eye_color("Brown");
	customer4.set_hair_color("Blond");
	customer4.set_height(5.4);
	customer4.set_weight(40.1);
	customer4.insert_phone_number(numTen);
	customer4.insert_phone_number(numThree);

	Customer customer5;
	customer5.set_name("Shahida");
	customer5.set_father_name("Hussain");
	customer5.set_mother_name("Shahnaz");
	string nid5 = "19692332319";
	char customerNID5[11];
	for (int index5 = 0; index5 < 11; index5++)
	{
		customerNID5[index5] = nid5[index5];
	}
	customer5.set_age(55);
	customer5.set_gender('F');
	customer5.set_national_ID(customerNID5);
	customer5.set_present_address("Mohammadpur,Dhaka");
	customer5.set_permanent_address("Shariatpur");
	customer5.set_marital_status(true);
	customer5.set_customer_index(6);
	customer5.set_eye_color("Brown");
	customer5.set_hair_color("Black");
	customer5.set_height(5.0);
	customer5.set_weight(62.2);
	customer5.insert_phone_number(numFour);
	customer5.insert_phone_number(numTwo);

	Customer customer6;
	customer6.set_name("Nafisa");
	customer6.set_father_name("Edris");
	customer6.set_mother_name("Farida");
	string nid6 = "20030632319";
	char customerNID6[11];
	for (int index6 = 0; index6 < 11; index6++)
	{
		customerNID6[index6] = nid6[index6];
	}
	customer6.set_age(15);
	customer6.set_gender('F');
	customer6.set_national_ID(customerNID6);
	customer6.set_present_address("Ekbalroad,Mohammadpur,Dhaka");
	customer6.set_permanent_address("Comilla");
	customer6.set_marital_status(false);
	customer6.set_customer_index(7);
	customer6.set_eye_color("Green");
	customer6.set_hair_color("Brown");
	customer6.set_height(5.5);
	customer6.set_weight(48.9);
	customer6.insert_phone_number(numNine);
	customer6.insert_phone_number(numSeven);

	Customer customer7;
	customer7.set_name("Tahmid");
	customer7.set_father_name("Monir");
	customer7.set_mother_name("Shampa");
	string nid7 = "20002332317";
	char customerNID7[11];
	for (int index7 = 0; index7 < 11; index7++)
	{
		customerNID7[index7] = nid3[index7];
	}
	customer7.set_age(18);
	customer7.set_gender('M');
	customer7.set_national_ID(customerNID7);
	customer7.set_present_address("Shekhertek,Mohammadpur,Dhaka");
	customer7.set_permanent_address("Dhaka");
	customer7.set_marital_status(false);
	customer7.set_customer_index(8);
	customer7.set_eye_color("Black");
	customer7.set_hair_color("Black");
	customer7.set_height(5.5);
	customer7.set_weight(70.2);
	customer7.insert_phone_number(numFive);
	customer7.insert_phone_number(numTen);



	//end of customer declaration





	//Creating unsorted link list of customers
	KomKothaKoibenSTLList uncustomer;

	//Inserting 2 customer into unsorted link list

	uncustomer.put_customer_details(customer);
	uncustomer.put_customer_details(customer1);

	cout << "Two Customers Details is being inserted!!" << endl;

	//Printing unsorted customer list
	uncustomer.print_customer_list();
	//uncustomer.reset_list_customer_list();

	//Inserting a new phone number in existing customer
	uncustomer.insert_new_number(1, numFive);




	cout << endl << "Updated Customer List" << endl << endl;
	uncustomer.print_customer_list();
	

	//Inserting more Customers

	uncustomer.put_customer_details(customer2);
	uncustomer.put_customer_details(customer3);
	uncustomer.put_customer_details(customer4);
	uncustomer.put_customer_details(customer5);
	uncustomer.put_customer_details(customer6);
	uncustomer.put_customer_details(customer7);


	cout << "Another SIX new Customers Details is being inserted!!" << endl;


	//Deleting existance Customer's Phone Number until the length of phone number array is 0
	//when the a customer's phone number array length is 0, the customer details will be deleted

	
		uncustomer.delete_phone_number(3, "01998021382");
		uncustomer.delete_phone_number(3, "01675743091");


	uncustomer.change_operator_name(1,"01783511730", "BanglaLink");



	cout << endl << "Updated Customer List" << endl << endl;
	uncustomer.print_customer_list();
}

using namespace std;
int main()
{
	execution();
}


