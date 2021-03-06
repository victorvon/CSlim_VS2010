#include "stdafx.h"

#include "TestSlimAgain.h"
#include "Fixtures.h"

#include <SlimList.h>
#include <StatementExecutor.h>

SLIM_BEGIN_FIXTURE(TestSlimAgain) 
  SLIM_FUNCTION(setArgAgain)
  SLIM_FUNCTION(getArgAgain)
SLIM_END_FIXTURE


Slim::FixtureIntf* TestSlimAgain::Create(Slim::StatementExecutor* executor, Slim::SlimList* args)
{
  return new TestSlimAgain();
}

void TestSlimAgain::Destroy()
{
  delete this;
}

std::string TestSlimAgain::setArgAgain(Slim::SlimList* args) 
{
  arg = args->GetStringAt(0);
  return "/__VOID__/";
}

std::string TestSlimAgain::getArgAgain(Slim::SlimList* args) 
{
  return arg;
}
