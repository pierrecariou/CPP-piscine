#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
	public:	
		Contact(void);
		~Contact(void);
		void	addInfos(void);
		void	showInfos(void);
		void	showInfosTable(int k);

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
		void	_tooLong(std::string str);
};

#endif
