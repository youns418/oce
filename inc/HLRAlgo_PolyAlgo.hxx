// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_PolyAlgo_HeaderFile
#define _HLRAlgo_PolyAlgo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_HLRAlgo_PolyAlgo_HeaderFile
#include <Handle_HLRAlgo_PolyAlgo.hxx>
#endif

#ifndef _Handle_TColStd_HArray1OfTransient_HeaderFile
#include <Handle_TColStd_HArray1OfTransient.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _HLRAlgo_ListIteratorOfListOfBPoint_HeaderFile
#include <HLRAlgo_ListIteratorOfListOfBPoint.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class TColStd_HArray1OfTransient;
class TColStd_Array1OfTransient;
class HLRAlgo_EdgeStatus;


//! to remove Hidden lines on Triangulations. <br>
class HLRAlgo_PolyAlgo : public MMgt_TShared {

public:

  
  Standard_EXPORT   HLRAlgo_PolyAlgo();
  
  Standard_EXPORT     void Init(const Handle(TColStd_HArray1OfTransient)& HShell) ;
  
        TColStd_Array1OfTransient& PolyShell() const;
  
  Standard_EXPORT     void Clear() ;
  //! Prepare all the data to process the algo. <br>
  Standard_EXPORT     void Update() ;
  
        void InitHide() ;
  
        Standard_Boolean MoreHide() const;
  
  Standard_EXPORT     void NextHide() ;
  //! process hiding between <Pt1> and <Pt2>. <br>
  Standard_EXPORT     void Hide(Standard_Address& Coordinates,HLRAlgo_EdgeStatus& status,Standard_Integer& Index,Standard_Boolean& reg1,Standard_Boolean& regn,Standard_Boolean& outl,Standard_Boolean& intl) ;
  
        void InitShow() ;
  
        Standard_Boolean MoreShow() const;
  
  Standard_EXPORT     void NextShow() ;
  //! process hiding between <Pt1> and <Pt2>. <br>
  Standard_EXPORT     void Show(Standard_Address& Coordinates,Standard_Integer& Index,Standard_Boolean& reg1,Standard_Boolean& regn,Standard_Boolean& outl,Standard_Boolean& intl) ;




  DEFINE_STANDARD_RTTI(HLRAlgo_PolyAlgo)

protected:




private: 


Handle_TColStd_HArray1OfTransient myHShell;
Standard_Real myRealPtr[10];
HLRAlgo_ListIteratorOfListOfBPoint mySegListIt;
Standard_Integer myNbrShell;
Standard_Integer myCurShell;
Standard_Boolean myFound;


};


#include <HLRAlgo_PolyAlgo.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif