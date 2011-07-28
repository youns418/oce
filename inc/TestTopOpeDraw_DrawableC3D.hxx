// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TestTopOpeDraw_DrawableC3D_HeaderFile
#define _TestTopOpeDraw_DrawableC3D_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TestTopOpeDraw_DrawableC3D_HeaderFile
#include <Handle_TestTopOpeDraw_DrawableC3D.hxx>
#endif

#ifndef _Handle_Draw_Text3D_HeaderFile
#include <Handle_Draw_Text3D.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Draw_Color_HeaderFile
#include <Draw_Color.hxx>
#endif
#ifndef _DrawTrSurf_Curve_HeaderFile
#include <DrawTrSurf_Curve.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Draw_Text3D;
class Geom_Curve;
class Draw_Color;
class gp_Pnt;
class Draw_Interpretor;
class Draw_Display;



class TestTopOpeDraw_DrawableC3D : public DrawTrSurf_Curve {

public:

  
  Standard_EXPORT   TestTopOpeDraw_DrawableC3D(const Handle(Geom_Curve)& C,const Draw_Color& CColor);
  
  Standard_EXPORT   TestTopOpeDraw_DrawableC3D(const Handle(Geom_Curve)& C,const Draw_Color& CColor,const Standard_CString Text,const Draw_Color& TextColor);
  
  Standard_EXPORT   TestTopOpeDraw_DrawableC3D(const Handle(Geom_Curve)& C,const Draw_Color& CColor,const Standard_CString Text,const Draw_Color& TextColor,const Standard_Integer Discret,const Standard_Real Deflection,const Standard_Integer DrawMode,const Standard_Boolean DispOrigin = Standard_True);
  
  Standard_EXPORT   virtual  gp_Pnt Pnt() const;
  
  Standard_EXPORT     void ChangePnt(const gp_Pnt& P) ;
  
  Standard_EXPORT     void ChangeCurve(const Handle(Geom_Curve)& C) ;
  
  Standard_EXPORT     void ChangeText(const Standard_CString T) ;
  
  Standard_EXPORT   virtual  void Name(const Standard_CString N) ;
  //! For variable whatis command. <br>
  Standard_EXPORT   virtual  void Whatis(Draw_Interpretor& I) const;
  
  Standard_EXPORT   virtual  void DrawOn(Draw_Display& dis) const;




  DEFINE_STANDARD_RTTI(TestTopOpeDraw_DrawableC3D)

protected:


Handle_Draw_Text3D myText3D;
Standard_CString myText;


private: 


Draw_Color myTextColor;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif