//
//  BookmarkViewController.h
//  LinGO
//

#import <UIKit/UIKit.h>

@interface BookmarkViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
	IBOutlet UITableView *aTableView;
}

@property (nonatomic, retain) UITableView *aTableView;

@end