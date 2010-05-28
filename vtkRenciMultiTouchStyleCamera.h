/*=========================================================================

  Name:        vtkRenciMultiTouchStyleCamera.h

  Author:      David Borland, The Renaissance Computing Institute (RENCI)

  Copyright:   The Renaissance Computing Institute (RENCI)

  License:     Licensed under the RENCI Open Source Software License v. 1.0.
               
               See included License.txt or 
               http://www.renci.org/resources/open-source-software-license
               for details.

=========================================================================*/
// .NAME vtkRenciMultiTouchStyleCamera
// .SECTION Description
// vtkRenciMultiTouchStyleCamera moves the camera based on events 
// generated by multi-touch devices developed at Renci
// (http://vis.renci.org/multitouch/).

// .SECTION see also
// vtkDeviceInteractor vtkInteractionDevice

#ifndef __vtkRenciMultiTouchStyleCamera_h
#define __vtkRenciMultiTouchStyleCamera_h

#include "vtkInteractionDeviceConfigure.h"

#include "vtkRenciMultiTouchStyle.h"

class VTK_INTERACTIONDEVICE_EXPORT vtkRenciMultiTouchStyleCamera : public vtkRenciMultiTouchStyle
{
public:
  static vtkRenciMultiTouchStyleCamera* New();
  vtkTypeRevisionMacro(vtkRenciMultiTouchStyleCamera,vtkRenciMultiTouchStyle);
  void PrintSelf(ostream&, vtkIndent); 

  // Description:
  // Perform interaction based on an event
  virtual void OnEvent(vtkObject* caller, unsigned long eid, void* callData);

protected:
  vtkRenciMultiTouchStyleCamera();
  ~vtkRenciMultiTouchStyleCamera();

  virtual void OnOneDrag(vtkRenciMultiTouch*);
  virtual void OnZoom(vtkRenciMultiTouch*);
  virtual void OnTranslateX(vtkRenciMultiTouch*);
  virtual void OnTranslateY(vtkRenciMultiTouch*);
  virtual void OnRotateX(vtkRenciMultiTouch*);
  virtual void OnRotateY(vtkRenciMultiTouch*);
  virtual void OnRotateZ(vtkRenciMultiTouch*);

private:
  vtkRenciMultiTouchStyleCamera(const vtkRenciMultiTouchStyleCamera&);  // Not implemented.
  void operator=(const vtkRenciMultiTouchStyleCamera&);  // Not implemented.
};

#endif