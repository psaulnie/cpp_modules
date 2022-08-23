/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:02:42 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/23 14:53:51 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

#include "Form.hpp"

class	Form;

class Bureaucrat
{
private:
	std::string	const name;
	int			grade;
public:
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat &copy);
	Bureaucrat	&operator=(Bureaucrat const &copy);
	~Bureaucrat();

	std::string	getName() const;
	int			getGrade() const;
	
	void		gradeUp();
	void		gradeDown();

	void		signForm(Form *form);
	void		executeForm(Form const &form);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char*	what() const throw()
			{
				return ("The form needs a higher bureaucrat to be signed");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char*	what() const throw()
			{
				return ("The form needs a lower bureaucrat to be signed");
			}
	};

};

std::ostream	&operator<<(std::ostream& os, Bureaucrat const &curr);

#endif
