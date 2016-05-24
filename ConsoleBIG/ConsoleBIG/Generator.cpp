#include "stdafx.h"
#include "Generator.h"

#include <random>
#include <chrono>
#include <stdint.h>


Generator::Generator() :m_generator(std::chrono::system_clock::now().time_since_epoch().count())
{
	//auto v_random = std::chrono::system_clock::now().time_since_epoch().count();
	//std::default_random_engine m_generator(v_random);
}
 
uint32_t Generator::Generate(const uint32_t aFrom, const uint32_t aTo)
{
	return std::uniform_int_distribution<uint32_t> (aFrom, aTo)(m_generator);
	/*std::uniform_int_distribution<uint32_t> distribution(aFrom, aTo);
	return distribution(m_generator);*/
}

Generator::~Generator()
{
}
