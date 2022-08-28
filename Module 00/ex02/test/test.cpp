/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 21:02:12 by samajat           #+#    #+#             */
/*   Updated: 2022/08/28 20:54:10 by samajat          ###   ########.fr       */
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
#include <time>
#include <iostream>
 
int main()
{
    tm *tm_gmt = gmtime(&curr_time);
	cout << "Current time : " << tm_gmt->tm_hour << ":" << tm_gmt->tm_min << ":" << tm_gmt->tm_sec << " GMT";
}