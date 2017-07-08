#include "generator.h"
#include "limits_generatorhelper.h"
#include "derivs_generatorhelper.h"
#include "integrals_generatorhelper.h"
#include "series_generatorhelper.h"
#include "diffequ_generatorhelper.h"


Generator *Generator::instance()
{
	static Generator gen;
	return &gen;
}

Generator::Generator()
{
	registerHelper(new Limits_GeneratorHelper());
	registerHelper(new Derivs_GeneratorHelper());
    registerHelper(new Integrals_GeneratorHelper());
	registerHelper(new series_GeneratorHelper());
	registerHelper(new diffequ_GeneratorHelper());
}
