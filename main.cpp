#include <iostream>
#include "ThreadPool.h"

int main()
{
	ThreadPool tPool;
	tPool.Start();
	return 0;
}
//Next, write a main() function that tests the ThreadPool class as created in the above question.Let the
//main thread write a number of items in the workqueue.You may simulate delay in writing items to
//the workqueue by putting the main thread to sleep for random durations of time.Make sure that
//every item written in the queue is processed by the worker threads in the pool.You will need to add
//more attributes to the ThreadPool class to keep track of this.