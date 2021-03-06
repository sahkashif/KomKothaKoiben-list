#include "KomKothaKoibenSTLList.h"



KomKothaKoibenSTLList::KomKothaKoibenSTLList()
{
	
}


KomKothaKoibenSTLList::~KomKothaKoibenSTLList()
{
	make_empty();
}

int KomKothaKoibenSTLList::get_length()
{
	return customerList.size();
}

void KomKothaKoibenSTLList::make_empty()
{
	
		customerList.clear();
	
	
}

bool KomKothaKoibenSTLList::is_empty()
{
	return(customerList.empty());
}



Customer KomKothaKoibenSTLList::get_customer_details(int customerIndex)
{
	Customer customer;

	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		customer = *it;
		if (customer.get_customer_index() == customerIndex)
		{
			return customer;
		}
	}

	cout << endl << "Customer Index is not CORRECT!!" << endl;
	return customerList.front();
}

bool KomKothaKoibenSTLList::put_customer_details(Customer customer)
{
	if (is_empty())
	{
		customerList.push_front(customer);
		return true;
	}
	else
	{
		for (it = customerList.begin(); it != customerList.end(); it++)
		{
			Customer temCus = *it;
			if (temCus.get_age() > customer.get_age() || temCus.get_age() == customer.get_age())
			{
				customerList.insert(it, customer);
				return true;
			}
		
		}

		customerList.push_back(customer);
		return true;

		
	}
	

}

bool KomKothaKoibenSTLList::delete_customer_details(int customerIndex)
{
	Customer temCustomer;
	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		temCustomer = *it;
		if (temCustomer.get_customer_index() == customerIndex)
		{
			customerList.erase(it);
			cout << endl << temCustomer.get_name() << "'s deatils is been deleted!!" << endl << endl;
			return true;
		}
		else
		{
			continue;
		}

		
	}
	cout << endl << "Customer Index is not Correct" << endl;
	return false;
}



void KomKothaKoibenSTLList::print_customer_list()
{
	cout << endl << "Here Customer List is sorted in terms of person's age" << endl << endl;
	Customer customer;

	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		customer = *it;
		customer.print_customer_deatails();
	}
}

bool KomKothaKoibenSTLList::insert_new_number(int customerIndex, PhoneNumber phn)
{
	Customer customer;
	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		customer = *it;
		if (customer.get_customer_index() == customerIndex)
		{
			customer.insert_phone_number(phn);
			*it = customer;
			cout << endl << "A New Phone number is been ADDED to " << customer.get_name() << "'s deatils !!" << endl << endl;
			return true;
		}
	}
	cout << endl << "Customer Index or is not CORRECT!!" << endl << endl;
	return false;
}

bool KomKothaKoibenSTLList::delete_phone_number(int customerIndex, string phoneNumber)
{
	Customer customer;
	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		customer = *it;
		if (customer.get_customer_index() == customerIndex)
		{
			customer.delete_phone_number(phoneNumber);
			*it = customer;
			cout << endl << "A Number is been deleted from " << customer.get_name() << "'s deatils !!" << endl << endl;
			if (customer.phone_number_get_length() == 0)
			{
				delete_customer_details(customer.get_customer_index());
			}
			
			return true;
		}
	}
	cout << endl << "Customer Index or Phone Number Index is not CORRECT!!" << endl << endl;
	return false;
}
bool KomKothaKoibenSTLList::change_operator_name(int customerIndex, string phoneNumber, string changedOperatorName)
{
	Customer customer;
	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		customer = *it;
		if (customer.get_customer_index() == customerIndex)
		{
			customer.change_operator_name(phoneNumber,changedOperatorName);
			*it = customer;
			
			return true;
		}
	}
	cout << endl << "Customer Index or Phone Number Index is not CORRECT!!" << endl << endl;
	return false;
	
}
