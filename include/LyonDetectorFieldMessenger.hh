//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
//
// $Id: LyonDetectorFieldMessenger.hh,v 1.4.2.1 2008/05/05 09:23:51 gcosmo Exp $
// GEANT4 tag $Name: geant4-09-01-patch-02 $
//
// 

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

#ifndef LyonDetectorFieldMessenger_h
#define LyonDetectorFieldMessenger_h 1

#include "globals.hh"
#include "G4UImessenger.hh"

class LyonDetectorFieldSetup;
class G4UIdirectory;
class G4UIcmdWithAString;
class G4UIcmdWithAnInteger;
class G4UIcmdWithADouble;
class G4UIcmdWithADoubleAndUnit;
class G4UIcmdWithoutParameter;


class LyonDetectorFieldMessenger: public G4UImessenger
{
  public:
    LyonDetectorFieldMessenger(LyonDetectorFieldSetup* );
   ~LyonDetectorFieldMessenger();
    
    void SetNewValue(G4UIcommand*, G4String);
    void SetNewValue(G4UIcommand*, G4int);
    
  private:

    LyonDetectorFieldSetup*     fEFieldSetup;
    
    G4UIdirectory*             LyonDetectordetDir;

    G4UIcmdWithAnInteger*      StepperCmd;
    G4UIcmdWithADouble*        ElFieldCmd;
    G4UIcmdWithADoubleAndUnit* MinStepCmd;
    G4UIcmdWithoutParameter*   UpdateCmd;

    G4UIcmdWithAString*        AbsMaterCmd;


};

#endif

