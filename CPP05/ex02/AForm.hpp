/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:48:06 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/23 20:08:27 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat ;
class AForm {
    private :
        const std::string name ;
        bool ifsigned ; 
        const int Sign_grade;
        const int Excute_grade;
    public  :
        void setName();
        bool setifsigned(bool value);
        AForm();
        void setgrade();
        AForm(const AForm& value);
        AForm& operator= (const AForm& value) ;
        AForm(const std::string name, const int Sign, const int excute);
        ~AForm();
        int SignGeter()  const;
        std::string nameGeter()  const;
        bool checkSign() const;
        int Excutegrade() const;
        void BeSigned(const Bureaucrat& value);
        class GradeTooHighException : public std::exception {
            public :
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public :
                const char *what() const throw();
        };
        virtual void execute(Bureaucrat const & executor) = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& value) ;