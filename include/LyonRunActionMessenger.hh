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
// $Id: LyonRunActionMessenger.hh,v 1.10 2007/07/02 13:22:08 vnivanch Exp $
// GEANT4 tag $Name: geant4-09-02 $
//
// 

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#ifndef LyonRunActionMessenger_h
#define LyonRunActionMessenger_h 1

#include "globals.hh"
#include "G4UImessenger.hh"


class LyonRunAction;
class G4UIdirectory;
class G4UIcmdWithADouble;
class G4UIcmdWithAnInteger;
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class LyonRunActionMessenger: public G4UImessenger
{
public:
  LyonRunActionMessenger(LyonRunAction*);
  virtual ~LyonRunActionMessenger();
    
  void SetNewValue(G4UIcommand*, G4String);


private:
  LyonRunAction*     runsetup;
  G4UIdirectory*        runDir;   
  G4UIcmdWithADouble* ThresholdCmd; 
  /*G4UIcmdWithADouble* ThresholdCmd1;
  G4UIcmdWithADouble* ThresholdCmd2;
  G4UIcmdWithADouble* ThresholdCmd3;
  G4UIcmdWithADouble* EnergyCmd;*/
  G4UIcmdWithADouble* DistanceCmd; 
  G4UIcmdWithADouble* CharDisWidthCmd;
  G4UIcmdWithAnInteger* halfNPadCmd;
  G4UIcmdWithADouble* padsizeCmd;
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif
