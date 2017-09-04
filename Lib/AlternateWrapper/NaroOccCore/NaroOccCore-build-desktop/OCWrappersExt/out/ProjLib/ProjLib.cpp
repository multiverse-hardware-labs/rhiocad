// File generated by CPPExt (CPP file)
//

#include "ProjLib.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



OCgp_Pnt2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Pln^ Pl, OCNaroWrappers::OCgp_Pnt^ P)
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = ProjLib::Project(*((gp_Pln*)Pl->Handle), *((gp_Pnt*)P->Handle));
  return gcnew OCgp_Pnt2d(tmp);
}

OCgp_Lin2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Pln^ Pl, OCNaroWrappers::OCgp_Lin^ L)
{
  gp_Lin2d* tmp = new gp_Lin2d();
  *tmp = ProjLib::Project(*((gp_Pln*)Pl->Handle), *((gp_Lin*)L->Handle));
  return gcnew OCgp_Lin2d(tmp);
}

OCgp_Circ2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Pln^ Pl, OCNaroWrappers::OCgp_Circ^ C)
{
  gp_Circ2d* tmp = new gp_Circ2d();
  *tmp = ProjLib::Project(*((gp_Pln*)Pl->Handle), *((gp_Circ*)C->Handle));
  return gcnew OCgp_Circ2d(tmp);
}

OCgp_Elips2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Pln^ Pl, OCNaroWrappers::OCgp_Elips^ E)
{
  gp_Elips2d* tmp = new gp_Elips2d();
  *tmp = ProjLib::Project(*((gp_Pln*)Pl->Handle), *((gp_Elips*)E->Handle));
  return gcnew OCgp_Elips2d(tmp);
}

OCgp_Parab2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Pln^ Pl, OCNaroWrappers::OCgp_Parab^ P)
{
  gp_Parab2d* tmp = new gp_Parab2d();
  *tmp = ProjLib::Project(*((gp_Pln*)Pl->Handle), *((gp_Parab*)P->Handle));
  return gcnew OCgp_Parab2d(tmp);
}

OCgp_Hypr2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Pln^ Pl, OCNaroWrappers::OCgp_Hypr^ H)
{
  gp_Hypr2d* tmp = new gp_Hypr2d();
  *tmp = ProjLib::Project(*((gp_Pln*)Pl->Handle), *((gp_Hypr*)H->Handle));
  return gcnew OCgp_Hypr2d(tmp);
}

OCgp_Pnt2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Cylinder^ Cy, OCNaroWrappers::OCgp_Pnt^ P)
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = ProjLib::Project(*((gp_Cylinder*)Cy->Handle), *((gp_Pnt*)P->Handle));
  return gcnew OCgp_Pnt2d(tmp);
}

OCgp_Lin2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Cylinder^ Cy, OCNaroWrappers::OCgp_Lin^ L)
{
  gp_Lin2d* tmp = new gp_Lin2d();
  *tmp = ProjLib::Project(*((gp_Cylinder*)Cy->Handle), *((gp_Lin*)L->Handle));
  return gcnew OCgp_Lin2d(tmp);
}

OCgp_Lin2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Cylinder^ Cy, OCNaroWrappers::OCgp_Circ^ Ci)
{
  gp_Lin2d* tmp = new gp_Lin2d();
  *tmp = ProjLib::Project(*((gp_Cylinder*)Cy->Handle), *((gp_Circ*)Ci->Handle));
  return gcnew OCgp_Lin2d(tmp);
}

OCgp_Pnt2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Cone^ Co, OCNaroWrappers::OCgp_Pnt^ P)
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = ProjLib::Project(*((gp_Cone*)Co->Handle), *((gp_Pnt*)P->Handle));
  return gcnew OCgp_Pnt2d(tmp);
}

OCgp_Lin2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Cone^ Co, OCNaroWrappers::OCgp_Lin^ L)
{
  gp_Lin2d* tmp = new gp_Lin2d();
  *tmp = ProjLib::Project(*((gp_Cone*)Co->Handle), *((gp_Lin*)L->Handle));
  return gcnew OCgp_Lin2d(tmp);
}

OCgp_Lin2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Cone^ Co, OCNaroWrappers::OCgp_Circ^ Ci)
{
  gp_Lin2d* tmp = new gp_Lin2d();
  *tmp = ProjLib::Project(*((gp_Cone*)Co->Handle), *((gp_Circ*)Ci->Handle));
  return gcnew OCgp_Lin2d(tmp);
}

OCgp_Pnt2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Sphere^ Sp, OCNaroWrappers::OCgp_Pnt^ P)
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = ProjLib::Project(*((gp_Sphere*)Sp->Handle), *((gp_Pnt*)P->Handle));
  return gcnew OCgp_Pnt2d(tmp);
}

OCgp_Lin2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Sphere^ Sp, OCNaroWrappers::OCgp_Circ^ Ci)
{
  gp_Lin2d* tmp = new gp_Lin2d();
  *tmp = ProjLib::Project(*((gp_Sphere*)Sp->Handle), *((gp_Circ*)Ci->Handle));
  return gcnew OCgp_Lin2d(tmp);
}

OCgp_Pnt2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Torus^ To, OCNaroWrappers::OCgp_Pnt^ P)
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = ProjLib::Project(*((gp_Torus*)To->Handle), *((gp_Pnt*)P->Handle));
  return gcnew OCgp_Pnt2d(tmp);
}

OCgp_Lin2d^ OCProjLib::Project(OCNaroWrappers::OCgp_Torus^ To, OCNaroWrappers::OCgp_Circ^ Ci)
{
  gp_Lin2d* tmp = new gp_Lin2d();
  *tmp = ProjLib::Project(*((gp_Torus*)To->Handle), *((gp_Circ*)Ci->Handle));
  return gcnew OCgp_Lin2d(tmp);
}

