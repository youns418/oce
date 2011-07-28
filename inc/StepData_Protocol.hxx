// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_Protocol_HeaderFile
#define _StepData_Protocol_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepData_Protocol_HeaderFile
#include <Handle_StepData_Protocol.hxx>
#endif

#ifndef _Interface_DataMapOfTransientInteger_HeaderFile
#include <Interface_DataMapOfTransientInteger.hxx>
#endif
#ifndef _Handle_Dico_DictionaryOfTransient_HeaderFile
#include <Handle_Dico_DictionaryOfTransient.hxx>
#endif
#ifndef _Interface_Protocol_HeaderFile
#include <Interface_Protocol.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Interface_Protocol_HeaderFile
#include <Handle_Interface_Protocol.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepData_EDescr_HeaderFile
#include <Handle_StepData_EDescr.hxx>
#endif
#ifndef _Handle_StepData_ESDescr_HeaderFile
#include <Handle_StepData_ESDescr.hxx>
#endif
#ifndef _Handle_StepData_ECDescr_HeaderFile
#include <Handle_StepData_ECDescr.hxx>
#endif
#ifndef _Handle_StepData_PDescr_HeaderFile
#include <Handle_StepData_PDescr.hxx>
#endif
class Dico_DictionaryOfTransient;
class Interface_Protocol;
class Standard_Transient;
class Standard_Type;
class Interface_InterfaceModel;
class StepData_EDescr;
class StepData_ESDescr;
class StepData_ECDescr;
class TColStd_SequenceOfAsciiString;
class StepData_PDescr;


//! Description of Basic Protocol for Step <br>
//!           The class Protocol from StepData itself describes a default <br>
//!           Protocol, which recognizes only UnknownEntities. <br>
//!           Sub-classes will redefine CaseNumber and, if necessary, <br>
//!           NbResources and Resources. <br>
class StepData_Protocol : public Interface_Protocol {

public:

  
  Standard_EXPORT   StepData_Protocol();
  //! Gives the count of Protocols used as Resource (can be zero) <br>
//!           Here, No resource <br>
  Standard_EXPORT     Standard_Integer NbResources() const;
  //! Returns a Resource, given a rank. Here, none <br>
  Standard_EXPORT     Handle_Interface_Protocol Resource(const Standard_Integer num) const;
  //! Returns a unique positive number for any recognized entity <br>
//!           Redefined to work by calling both TypeNumber and, for a <br>
//!           Described Entity (late binding) DescrNumber <br>
  Standard_EXPORT   virtual  Standard_Integer CaseNumber(const Handle(Standard_Transient)& obj) const;
  //! Returns a Case Number, specific of each recognized Type <br>
//!           Here, only Unknown Entity is recognized <br>
  Standard_EXPORT     Standard_Integer TypeNumber(const Handle(Standard_Type)& atype) const;
  //! Returns the Schema Name attached to each class of Protocol <br>
//!           To be redefined by each sub-class <br>
//!           Here, SchemaName returns "(DEFAULT)" <br>
//! was C++ : return const <br>
  Standard_EXPORT   virtual  Standard_CString SchemaName() const;
  //! Creates an empty Model for Step Norm <br>
  Standard_EXPORT     Handle_Interface_InterfaceModel NewModel() const;
  //! Returns True if <model> is a Model of Step Norm <br>
  Standard_EXPORT     Standard_Boolean IsSuitableModel(const Handle(Interface_InterfaceModel)& model) const;
  //! Creates a new Unknown Entity for Step (UndefinedEntity) <br>
  Standard_EXPORT     Handle_Standard_Transient UnknownEntity() const;
  //! Returns True if <ent> is an Unknown Entity for the Norm, i.e. <br>
//!           Type UndefinedEntity, status Unknown <br>
  Standard_EXPORT     Standard_Boolean IsUnknownEntity(const Handle(Standard_Transient)& ent) const;
  //! Returns a unique positive CaseNumber for types described by <br>
//!           an EDescr (late binding) <br>
//!  Warning : TypeNumber and DescrNumber must give together a unique <br>
//!           positive case number for each distinct case, type or descr <br>
  Standard_EXPORT   virtual  Standard_Integer DescrNumber(const Handle(StepData_EDescr)& adescr) const;
  //! Records an EDescr with its case number <br>
//!           Also records its name for an ESDescr (simple type): an ESDescr <br>
//!           is then used, for case number, or for type name <br>
  Standard_EXPORT     void AddDescr(const Handle(StepData_EDescr)& adescr,const Standard_Integer CN) ;
  //! Tells if a Protocol brings at least one ESDescr, i.e. if it <br>
//!           defines at least one entity description by ESDescr mechanism <br>
  Standard_EXPORT     Standard_Boolean HasDescr() const;
  //! Returns the description attached to a case number, or null <br>
  Standard_EXPORT     Handle_StepData_EDescr Descr(const Standard_Integer num) const;
  //! Returns a description according to its name <br>
//!           <anylevel> True (D) : for <me> and its resources <br>
//!           <anylevel> False : for <me> only <br>
  Standard_EXPORT     Handle_StepData_EDescr Descr(const Standard_CString name,const Standard_Boolean anylevel = Standard_True) const;
  //! Idem as Descr but cast to simple description <br>
  Standard_EXPORT     Handle_StepData_ESDescr ESDescr(const Standard_CString name,const Standard_Boolean anylevel = Standard_True) const;
  //! Returns a complex description according to list of names <br>
//!           <anylevel> True (D) : for <me> and its resources <br>
//!           <anylevel> False : for <me> only <br>
  Standard_EXPORT     Handle_StepData_ECDescr ECDescr(const TColStd_SequenceOfAsciiString& names,const Standard_Boolean anylevel = Standard_True) const;
  //! Records an PDescr <br>
  Standard_EXPORT     void AddPDescr(const Handle(StepData_PDescr)& pdescr) ;
  //! Returns a parameter description according to its name <br>
//!           <anylevel> True (D) : for <me> and its resources <br>
//!           <anylevel> False : for <me> only <br>
  Standard_EXPORT     Handle_StepData_PDescr PDescr(const Standard_CString name,const Standard_Boolean anylevel = Standard_True) const;
  //! Records an ESDescr, intended to build complex descriptions <br>
  Standard_EXPORT     void AddBasicDescr(const Handle(StepData_ESDescr)& esdescr) ;
  //! Returns a basic description according to its name <br>
//!           <anylevel> True (D) : for <me> and its resources <br>
//!           <anylevel> False : for <me> only <br>
  Standard_EXPORT     Handle_StepData_EDescr BasicDescr(const Standard_CString name,const Standard_Boolean anylevel = Standard_True) const;




  DEFINE_STANDARD_RTTI(StepData_Protocol)

protected:




private: 


Interface_DataMapOfTransientInteger thedscnum;
Handle_Dico_DictionaryOfTransient thedscnam;
Handle_Dico_DictionaryOfTransient thepdescr;
Handle_Dico_DictionaryOfTransient thedscbas;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif