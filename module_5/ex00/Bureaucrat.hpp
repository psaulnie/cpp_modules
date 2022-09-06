/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:02:42 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/06 12:24:57 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>


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

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char*	what() const throw()
			{
				return ("The grade is too high !");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char*	what() const throw()
			{
				return ("The grade is too low !");
			}
	};

};

std::ostream	&operator<<(std::ostream& os, Bureaucrat const &curr);

#endif
