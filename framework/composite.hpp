#ifndef COMPOSITE_HPP
#define COMPOSITE_HPP
#include "box.hpp"
#include "sphere.hpp"
#include "ray.hpp"
#include "hit.hpp"
#include <memory>
#include <string>
#include <vector>



class Composite : public Shape 
{
  public:
    typedef std::shared_ptr<Shape> shape_pointer;
    //KONSTRUTOREN----------------------------------------------------------------------
    Composite();
    Composite(std::string const& name);
    ~Composite();

    //FUNKTIONEN-------------------------------------------------------------------------
    Hit intersect(Ray const& ray) const override;
    /*
    void translate(glm::vec3 const& distance) override;
    void rotate(double angle, glm::vec3 const& point) override;
    void scale(double scale_factor) override;
    */
    void add(shape_pointer const& shape)
    {
        m_shapes.push_back(shape);
    } ;

    void set_name(std::string const name)
    {   
        std::cout<< "setname\n";
        std::cout<< name;
        m_name = name;
        
    } ;

 private:
    std::string m_name;
    std::vector<shape_pointer> m_shapes;
};

#endif
