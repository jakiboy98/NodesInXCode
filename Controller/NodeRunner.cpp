/*
 * NodeRunner.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: jwil9706
 */

#include "NodeController.h"

int main()
{
	NodeController * baseController = new NodeController();
	baseController->start();
	return 0;
}

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
}

NodeController::start()
{
	arrayTimer.startTimer();

	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		notHipsterInts->setindex, (index * 23));
	}

	for(int index = notHipsterInts->getSize( -1; index >= 0; index--))
	{
		cout << "The contents of the notHipsterInts array node " << index << " are: " << notHipsterInts;
	}

	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation
}

