/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/07/2015 11:27:43 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

pthread_mutex_t mutex;

void *print_msg(void *arg)
{
	int i = 0;
	pthread_mutex_lock(&mutex);
	for (i = 0; i < 15; i++) {
		printf("output: %d\n", i);
		usleep(100);
	}
	pthread_mutex_unlock(&mutex);
}

int main()
{
	pthread_t id1;
	pthread_t id2;
	pthread_mutex_init(&mutex, NULL);
	pthread_create(&id1, NULL, print_msg, NULL);
	pthread_create(&id2, NULL, print_msg, NULL);
	pthread_join(id1, NULL);
	pthread_join(id2, NULL);
	pthread_mutex_destroy(&mutex);

	return 0;
}

