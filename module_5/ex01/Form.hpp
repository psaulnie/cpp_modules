/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:03:07 by psaulnie          #+#    #+#             */
/*   Updated: 2022/08/23 09:26:28 by psaulnie         ###   ########.fr       */
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
		~Form();

		std::string	getName() const;
		bool		getIsSigned() const;
		int			getSignGrade() const;
		int			getExecuteGrade() const;
		void		setBeSigned();

		void	beSigned(Bureaucrat *person);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("Form::GradeTooHighException");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("Form::GradeTooLowException");
				}
		};
		class AlreadySigned : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("Form::AlreadySigned");
				}
		};
		
};

std::ostream	&operator<<(std::ostream& os, Form const &curr);

#endif