#ifndef MATERIAL_HPP
#define MATERIAL_HPP

#include <string>
#include "color.hpp"
#include <ostream>

struct Material
{
	Material():
		name{"default material"},
		ka(),
		kd(),
		ks(),
		kr(),
		opac(),
		m(1.0f)
		{}

	Material(std::string const& n, Color const& a, Color const& d,
				Color const& s, float r, float o, float m_):
		name{n},
		ka(a),
		kd(d),
		ks(s),
		kr(r),
		opac(o),
		m(m_)
		{}

	friend std::ostream& operator<<(std::ostream& os, Material const& mat)
	{	
		os << "Name:  " << mat.name << "\n"
		   << "Ambient:   "<< mat.ka << "\n"
		   << "Defuse:   "<< mat.kd << "\n"
		   << "Specular:   "<< mat.ks << "\n"
		   << "Exponent:   "<< mat.m << "\n";

		return os;
	}




	std::string name;
	Color ka;
	Color kd;
	Color ks;
	float kr;
	float opac;
	float m;
};

#endif