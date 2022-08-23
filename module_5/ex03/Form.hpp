/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:03:07 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/23 14:56:34 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class	Bureaucrat;

class Form
{
	private:
		std::string	const	name;
		bool				isSigned;
		int	const			signGrade;
		int	const			executeGrade;
	public:
		Form(std::string name, int signGrade, int executeGrade);
		Form(Form &copy);
		Form	&operator=(Form &copy);
		virtual ~Form();

		std::string		getName() const;
		bool			getIsSigned() const;
		int				getSignGrade() const;
		int				getExecuteGrade() const;
		void			setBeSigned();

		bool			canBeExecuted(Bureaucrat const *person) const;	

		void			beSigned(Bureaucrat *person);
		virtual void	execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("The grade of the bureaucrat is too high !");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("The grade of the bureaucrat is too low !");
				}
		};
		class AlreadySigned : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("The form is already signed !");
				}
		};
		class NotSignedFormException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("The form is not signed, it can't be executed !");
				}
		};
		
};

std::ostream	&operator<<(std::ostream& os, Form const &curr);

#endif