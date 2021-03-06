#include "KomKothaKoibenUnsortedDatabase.h"
#include"PhoneNumber.h"
#include<exception>
#include<iostream>


KomKothaKoibenUnsortedDatabase::KomKothaKoibenUnsortedDatabase()
{
	make_empty();
}


KomKothaKoibenUnsortedDatabase::~KomKothaKoibenUnsortedDatabase()
{
	make_empty();
}

bool KomKothaKoibenUnsortedDatabase::is_full()
{
	try {
		NodeType* newNode = new NodeType;
		delete newNode;
	}
	catch (std::bad_alloc exception) {
		return true;
	}
	return false;
}

int KomKothaKoibenUnsortedDatabase::get_length()
{
	return length;
}

void KomKothaKoibenUnsortedDatabase::make_empty()
{
	customerList = nullptr;
	currentPosition = nullptr;
	length = 0;
}

bool KomKothaKoibenUnsortedDatabase::is_empty()
{
	return (length == 0 && customerList == nullptr);
}

Customer KomKothaKoibenUnsortedDatabase::get_customer_details(int customIndex)
{
	NodeType* curr = customerList;
	bool found = false;
	while (curr != nullptr && !found) {
		if (curr->info.get_customer_index() != customIndex)
			curr = curr->next;
		else {
			found = true;
			return curr->info;
		}
	}
	found = false;
	cout << endl;
	cout << "Customer Index is not correct!!" << endl;
	return curr->info;
}

bool KomKothaKoibenUnsortedDatabase::put_customer_details(Customer customer)
{
	NodeType* curr=customerList;
	
	if (is_full())
		return false;
			
		NodeType* newNode = new NodeType;
		newNode->info = customer;
		newNode->next = customerList;
		customerList = newNode;
		length++;
		return true;
			
	
	

}

bool KomKothaKoibenUnsortedDatabase::delete_customer_details(int index)
{
	NodeType* curr = customerList;
	NodeType* prev = nullptr;
	bool found = false;
	while (curr != nullptr && !found) {
		if (curr->info.get_customer_index() == index) {
			found = true;
			if (prev == nullptr) {
				customerList = curr->next;
			}
			else {
				prev->next = curr->next;
			}
			delete curr;
			length--;
		}
		else {
			prev = curr;
			curr = curr->next;
		}
	}
	return found;

}

void KomKothaKoibenUnsortedDatabase::reset_list_customer_list()
{
	currentPosition = nullptr;
}

bool KomKothaKoibenUnsortedDatabase::has_next_customer()
{
	if (currentPosition == nullptr)
		return (customerList != nullptr);

	return (currentPosition->next != nullptr);
}

Customer KomKothaKoibenUnsortedDatabase::get_next_customer()
{
	currentPosition = ((currentPosition == nullptr) ? customerList : currentPosition->next);
	return currentPosition->info;

}

void KomKothaKoibenUnsortedDatabase::print_customer_list()
{
	for (int index = 0; index < length; index++)
	{
		get_next_customer().print_customer_deatails();
	}

}

bool KomKothaKoibenUnsortedDatabase::insert_new_number(int customIndex, PhoneNumber phn)
{
	NodeType* curr = customerList;
	bool found = false;
	while (curr != nullptr && !found) {
		if (curr->info.get_customer_index() != customIndex)
			curr = curr->next;
		else {
			found = true;
			curr->info.insert_phone_number(phn);
			cout << "New Phone Number is Added in "<<curr->info.get_name()<<"'s Information!!" << endl << endl;
			return found;
		}
	}
	found = false;
	cout << endl;
	cout << "Customer Index is not correct!!" << endl;
	return found;
	
}

bool KomKothaKoibenUnsortedDatabase::delete_phone_number(int customIndex, string phoneNumber)
{
	NodeType* curr = customerList;
	bool found = false;

	while (curr != nullptr && !found) {

		if (curr->info.get_customer_index() != customIndex)
			curr = curr->next;

		else {
			found = true;

			curr->info.delete_phone_number(phoneNumber);
			cout << "A Phone Number is Deleted from " << curr->info.get_name() << "'s Information!!" << endl << endl;


			if (curr->info.phone_number_get_length() == 0)
			{
				cout << curr->info.get_name() << "'s information is DELETED!!" << endl << endl;
				delete_customer_details(curr->info.get_customer_index());


			}

			return found;
		}
	}
	found = false;
	cout << endl;
	cout << "Customer Index or Phone Number Index is not correct!!" << endl;
	return found;
}

bool KomKothaKoibenUnsortedDatabase::change_operator_name(int customerIndex, string phoneNumber, string changedOperatorName)
{
	NodeType* curr = customerList;
	bool found = false;

	while (curr != nullptr && !found) {

		if (curr->info.get_customer_index() != customerIndex)
			curr = curr->next;

		else {
			found = true;
			curr->info.change_operator_name(phoneNumber,changedOperatorName);

			return found;
		}
	}
	found = false;
	cout << endl;
	cout << "Customer Index or Phone Number Index is not correct!!" << endl;
	return found;
}
