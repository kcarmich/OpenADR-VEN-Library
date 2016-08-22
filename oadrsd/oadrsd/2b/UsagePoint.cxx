// Copyright (c) 2005-2011 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

#include <xsd/cxx/pre.hxx>

// Begin prologue.
//
//
// End prologue.

#include "UsagePoint.hxx"

#include "HexBinary16.hxx"

#include "ServiceCategory.hxx"

#include "UInt8.hxx"

#include "ServiceDeliveryPoint.hxx"

namespace espi
{
  // UsagePoint
  // 

  const UsagePoint::roleFlags_optional& UsagePoint::
  roleFlags () const
  {
    return this->roleFlags_;
  }

  UsagePoint::roleFlags_optional& UsagePoint::
  roleFlags ()
  {
    return this->roleFlags_;
  }

  void UsagePoint::
  roleFlags (const roleFlags_type& x)
  {
    this->roleFlags_.set (x);
  }

  void UsagePoint::
  roleFlags (const roleFlags_optional& x)
  {
    this->roleFlags_ = x;
  }

  void UsagePoint::
  roleFlags (::std::auto_ptr< roleFlags_type > x)
  {
    this->roleFlags_.set (x);
  }

  const UsagePoint::ServiceCategory_optional& UsagePoint::
  ServiceCategory () const
  {
    return this->ServiceCategory_;
  }

  UsagePoint::ServiceCategory_optional& UsagePoint::
  ServiceCategory ()
  {
    return this->ServiceCategory_;
  }

  void UsagePoint::
  ServiceCategory (const ServiceCategory_type& x)
  {
    this->ServiceCategory_.set (x);
  }

  void UsagePoint::
  ServiceCategory (const ServiceCategory_optional& x)
  {
    this->ServiceCategory_ = x;
  }

  void UsagePoint::
  ServiceCategory (::std::auto_ptr< ServiceCategory_type > x)
  {
    this->ServiceCategory_.set (x);
  }

  const UsagePoint::status_optional& UsagePoint::
  status () const
  {
    return this->status_;
  }

  UsagePoint::status_optional& UsagePoint::
  status ()
  {
    return this->status_;
  }

  void UsagePoint::
  status (const status_type& x)
  {
    this->status_.set (x);
  }

  void UsagePoint::
  status (const status_optional& x)
  {
    this->status_ = x;
  }

  void UsagePoint::
  status (::std::auto_ptr< status_type > x)
  {
    this->status_.set (x);
  }

  const UsagePoint::ServiceDeliveryPoint_optional& UsagePoint::
  ServiceDeliveryPoint () const
  {
    return this->ServiceDeliveryPoint_;
  }

  UsagePoint::ServiceDeliveryPoint_optional& UsagePoint::
  ServiceDeliveryPoint ()
  {
    return this->ServiceDeliveryPoint_;
  }

  void UsagePoint::
  ServiceDeliveryPoint (const ServiceDeliveryPoint_type& x)
  {
    this->ServiceDeliveryPoint_.set (x);
  }

  void UsagePoint::
  ServiceDeliveryPoint (const ServiceDeliveryPoint_optional& x)
  {
    this->ServiceDeliveryPoint_ = x;
  }

  void UsagePoint::
  ServiceDeliveryPoint (::std::auto_ptr< ServiceDeliveryPoint_type > x)
  {
    this->ServiceDeliveryPoint_.set (x);
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;
}

namespace espi
{
  // UsagePoint
  //

  UsagePoint::
  UsagePoint ()
  : ::espi::IdentifiedObject (),
    roleFlags_ (this),
    ServiceCategory_ (this),
    status_ (this),
    ServiceDeliveryPoint_ (this)
  {
  }

  UsagePoint::
  UsagePoint (const UsagePoint& x,
              ::xml_schema::flags f,
              ::xml_schema::container* c)
  : ::espi::IdentifiedObject (x, f, c),
    roleFlags_ (x.roleFlags_, f, this),
    ServiceCategory_ (x.ServiceCategory_, f, this),
    status_ (x.status_, f, this),
    ServiceDeliveryPoint_ (x.ServiceDeliveryPoint_, f, this)
  {
  }

  UsagePoint::
  UsagePoint (const ::xercesc::DOMElement& e,
              ::xml_schema::flags f,
              ::xml_schema::container* c)
  : ::espi::IdentifiedObject (e, f | ::xml_schema::flags::base, c),
    roleFlags_ (this),
    ServiceCategory_ (this),
    status_ (this),
    ServiceDeliveryPoint_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
      this->parse (p, f);
    }
  }

  void UsagePoint::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    this->::espi::IdentifiedObject::parse (p, f);

    for (; p.more_elements (); p.next_element ())
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // roleFlags
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "roleFlags",
            "http://naesb.org/espi",
            &::xsd::cxx::tree::factory_impl< roleFlags_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          if (!this->roleFlags_)
          {
            ::std::auto_ptr< roleFlags_type > r (
              dynamic_cast< roleFlags_type* > (tmp.get ()));

            if (r.get ())
              tmp.release ();
            else
              throw ::xsd::cxx::tree::not_derived< char > ();

            this->roleFlags_.set (r);
            continue;
          }
        }
      }

      // ServiceCategory
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "ServiceCategory",
            "http://naesb.org/espi",
            &::xsd::cxx::tree::factory_impl< ServiceCategory_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          if (!this->ServiceCategory_)
          {
            ::std::auto_ptr< ServiceCategory_type > r (
              dynamic_cast< ServiceCategory_type* > (tmp.get ()));

            if (r.get ())
              tmp.release ();
            else
              throw ::xsd::cxx::tree::not_derived< char > ();

            this->ServiceCategory_.set (r);
            continue;
          }
        }
      }

      // status
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "status",
            "http://naesb.org/espi",
            &::xsd::cxx::tree::factory_impl< status_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          if (!this->status_)
          {
            ::std::auto_ptr< status_type > r (
              dynamic_cast< status_type* > (tmp.get ()));

            if (r.get ())
              tmp.release ();
            else
              throw ::xsd::cxx::tree::not_derived< char > ();

            this->status_.set (r);
            continue;
          }
        }
      }

      // ServiceDeliveryPoint
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "ServiceDeliveryPoint",
            "http://naesb.org/espi",
            &::xsd::cxx::tree::factory_impl< ServiceDeliveryPoint_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          if (!this->ServiceDeliveryPoint_)
          {
            ::std::auto_ptr< ServiceDeliveryPoint_type > r (
              dynamic_cast< ServiceDeliveryPoint_type* > (tmp.get ()));

            if (r.get ())
              tmp.release ();
            else
              throw ::xsd::cxx::tree::not_derived< char > ();

            this->ServiceDeliveryPoint_.set (r);
            continue;
          }
        }
      }

      break;
    }
  }

  UsagePoint* UsagePoint::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class UsagePoint (*this, f, c);
  }

  UsagePoint& UsagePoint::
  operator= (const UsagePoint& x)
  {
    if (this != &x)
    {
      static_cast< ::espi::IdentifiedObject& > (*this) = x;
      this->roleFlags_ = x.roleFlags_;
      this->ServiceCategory_ = x.ServiceCategory_;
      this->status_ = x.status_;
      this->ServiceDeliveryPoint_ = x.ServiceDeliveryPoint_;
    }

    return *this;
  }

  UsagePoint::
  ~UsagePoint ()
  {
  }

  static
  const ::xsd::cxx::tree::type_factory_initializer< 0, char, UsagePoint >
  _xsd_UsagePoint_type_factory_init (
    "UsagePoint",
    "http://naesb.org/espi");
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace espi
{
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

namespace espi
{
  void
  operator<< (::xercesc::DOMElement& e, const UsagePoint& i)
  {
    e << static_cast< const ::espi::IdentifiedObject& > (i);

    // roleFlags
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      if (i.roleFlags ())
      {
        const UsagePoint::roleFlags_type& x (*i.roleFlags ());
        if (typeid (UsagePoint::roleFlags_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "roleFlags",
              "http://naesb.org/espi",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "roleFlags",
            "http://naesb.org/espi",
            false, true, e, x);
      }
    }

    // ServiceCategory
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      if (i.ServiceCategory ())
      {
        const UsagePoint::ServiceCategory_type& x (*i.ServiceCategory ());
        if (typeid (UsagePoint::ServiceCategory_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "ServiceCategory",
              "http://naesb.org/espi",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "ServiceCategory",
            "http://naesb.org/espi",
            false, true, e, x);
      }
    }

    // status
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      if (i.status ())
      {
        const UsagePoint::status_type& x (*i.status ());
        if (typeid (UsagePoint::status_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "status",
              "http://naesb.org/espi",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "status",
            "http://naesb.org/espi",
            false, true, e, x);
      }
    }

    // ServiceDeliveryPoint
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      if (i.ServiceDeliveryPoint ())
      {
        const UsagePoint::ServiceDeliveryPoint_type& x (*i.ServiceDeliveryPoint ());
        if (typeid (UsagePoint::ServiceDeliveryPoint_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "ServiceDeliveryPoint",
              "http://naesb.org/espi",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "ServiceDeliveryPoint",
            "http://naesb.org/espi",
            false, true, e, x);
      }
    }
  }

  static
  const ::xsd::cxx::tree::type_serializer_initializer< 0, char, UsagePoint >
  _xsd_UsagePoint_type_serializer_init (
    "UsagePoint",
    "http://naesb.org/espi");
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>
