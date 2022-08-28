/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 21:02:12 by samajat           #+#    #+#             */
/*   Updated: 2022/08/28 21:43:22 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// class Test
// {
//     static int count;
//     public:
//         int getCount(void){return count;};
//         Test(){ count++;}
// };

// // Test :: count = 0;
#include <ctime>
#include <iostream>
#include <string>
int main()
{
    time_t curr_time;
    tm *_tm;
    std::string timeStamp;
    std::string month;
    std::string day;
    std::string year;
    
    curr_time = time(0);
    _tm = gmtime(&curr_time);
    month = std::to_string(_tm->tm_mon);
    day = std::to_string(_tm->tm_mday);
    year = std::to_string(_tm->tm_year + 1900);
    if (month.length() == 1)
        month = "0" + month;
    if (day.length() == 1)
        day = "0" + day;
	std::cout << "[" + year + month + day + "]" << std::endl;
}