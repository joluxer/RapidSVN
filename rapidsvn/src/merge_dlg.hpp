/*
 * ====================================================================
 * Copyright (c) 2002-2005 The RapidSvn Group.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program (in the file GPL.txt); if not, write to 
 * the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, 
 * Boston, MA  02110-1301  USA
 *
 * This software consists of voluntary contributions made by many
 * individuals.  For exact contribution history, see the revision
 * history and logs, available at http://rapidsvn.tigris.org/.
 * ====================================================================
 */
#ifndef _MERGE_DLG_H_INCLUDED_
#define _MERGE_DLG_H_INCLUDED_

// wxWidgets
#include "wx/dialog.h"

struct MergeData
{
  MergeData();

  wxString Path1;
  wxString Path2;
  wxString Path1Rev;
  wxString Path2Rev;
  wxString Destination;
  bool Recursive;
  bool Force;
};

class MergeDlg:public wxDialog
{
public:
  MergeDlg (wxWindow *parent, bool calledByLogDlg, MergeData & data);
  void OnOK (wxCommandEvent& event);
  void OnBrowse (wxCommandEvent & event);

private:
  void InitializeData ();
  int TestRev (wxString & val);

  MergeData & m_data;
  bool m_calledByLogDlg;

  DECLARE_EVENT_TABLE ()
};

#endif
/* -----------------------------------------------------------------
 * local variables:
 * eval: (load-file "../rapidsvn-dev.el")
 * end:
 */
