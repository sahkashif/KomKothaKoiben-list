#include "KomKothaKoibenSTLForwardList.h"



KomKothaKoibenSTLForwardList::KomKothaKoibenSTLForwardList()
{
	make_empty();
}


KomKothaKoibenSTLForwardList::~KomKothaKoibenSTLForwardList()
{
	make_empty();
}

int KomKothaKoibenSTLForwardList::get_length()
{
	return length;
}

void KomKothaKoibenSTLForwardList::make_empty()
{

	customerList.clear();

	length = 0;
}

bool KomKothaKoibenSTLForwardList::is_empty()
{
	return (customerList.empty());
}

Customer KomKothaKoibenSTLForwardList::get_customer_details(int index)
{
	Customer customer;
	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		customer = *it;
		if (customer.get_customer_index() == index)
		{
			return customer;
		}
	}
	cout << "Customer Index Number does not match";
	return customerList.front();
}

void KomKothaKoibenSTLForwardList::put_customer_details(Customer customer)
{
	
	customerList.push_front(customer);
}

void KomKothaKoibenSTLForwardList::delete_customer_details(int  index)
{
	Customer customer;
	std::forward_list<Customer> curr;
	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		customer = *it;
		if (customer.get_customer_index() != index)
		{
			
			curr.push_front(customer);
			
		}
		
	}
	customerList = curr;
}





void KomKothaKoibenSTLForwardList::print_customer_list()
{
	Customer customer;
	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		customer = *it;
		customer.print_customer_deatails();
	}

}

bool KomKothaKoibenSTLForwardList::insert_new_number(int customIndex, PhoneNumber phn)
{
	
	bool found = false;
	Customer customer;

	for (it = customerList.begin(); it != customerList.end();it++) {

		customer = *it;
		if (customer.get_customer_index() != customIndex)
			continue;
		else {
			found = true;
			customer.insert_phone_number(phn);
			*it = customer;
			cout << "New Phone Number is Added in " << customer.get_name() << "'s Information!!" << endl << endl;
			return found;
		}
	}
	found = false;
	cout << endl;
	cout << "Customer Index is not correct!!" << endl;
	return found;
}

bool KomKothaKoibenSTLForwardList::delete_phone_number(int customIndex, string phoneNumber)
{
	
	bool found = false;
	Customer customer;
	for (it = customerList.begin(); it!=customerList.end();it++) {

		customer = *it;

		if (customer.get_customer_index() != customIndex)
			continue;

		else {
			found = true;
			customer.delete_phone_number(phoneNumber);
			*it = customer;
			cout << "A Phone Number is Deleted from " << customer.get_name() << "'s Information!!" << endl << endl;
			if (customer.phone_number_get_length() == 0)
			{
				
				delete_customer_details(customer.get_customer_index());
				cout << customer.get_name() << "'s information is DELETED!!" << endl << endl;


			}

			return found;
		}
	}
	found = false;
	cout << endl;
	cout << "Customer Index or Phone Number Index is not correct!!" << endl;
	return found;
}

bool KomKothaKoibenSTLForwardList::change_operator_name(int customerIndex, string phoneNumber, string changedOperatorName)
{
	bool found = false;
	Customer customer;
	for (it = customerList.begin(); it != customerList.end(); it++) {

		customer = *it;

		if (customer.get_customer_index() != customerIndex)
			continue;

		else {
			found = true;
			customer.change_operator_name(phoneNumber,changedOperatorName);
			*it = customer;
			
			return found;
		}
	}
	found = false;
	cout << endl;
	cout << "Customer Index or Phone Number Index is not correct!!" << endl;
	return found;
}

