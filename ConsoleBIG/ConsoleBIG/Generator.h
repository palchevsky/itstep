#ifndef GENERATOR_PITOMN3490578
#define GENERATOR_PITOMN3490578

class Generator
{
public:
	Generator();
	~Generator();
	uint32_t Generator::Generate(const uint32_t aFrom, const uint32_t aTo);
protected:
	std::default_random_engine m_generator;

};


#endif // GENERATOR_PITOMN3490578